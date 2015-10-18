#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
BASENAME=`basename "$DIR"`

if [ "$BASENAME" = "Resources" ]; then
    DIR=`dirname "$DIR"`
    DIR=`dirname "$DIR"`
    DIR=`dirname "$DIR"`
    export CALL_BY_CONTAINER=APP
fi

VERSION=`cat $DIR/VERSION`

C2D_ROOT="$DIR"

echo ""
echo "C2D_ROOT = \"$C2D_ROOT\""
echo ""


# set Xcode
defaults write com.apple.dt.Xcode IDEApplicationwideBuildSettings -dict-add C2D_ROOT "$C2D_ROOT"
defaults write com.apple.dt.Xcode IDESourceTreeDisplayNames -dict-add C2D_ROOT C2D_ROOT
IDEApplicationwideBuildSettings=`defaults read com.apple.dt.Xcode IDEApplicationwideBuildSettings`
IDESourceTreeDisplayNames=`defaults read com.apple.dt.Xcode IDESourceTreeDisplayNames`

echo "> Xcode settings updated."

# set quick player
defaults write org.cocos.quick.player C2D_ROOT "$C2D_ROOT"
echo "> quick player settings updated."

# set .bash_profile or .profile
if [ -f ~/.bash_profile ]; then
PROFILE_NAME=~/.bash_profile
else
PROFILE_NAME=~/.profile
fi

sed -e '/C2D_ROOT/d' $PROFILE_NAME | sed -e '/add by c2d setup/d' > $PROFILE_NAME.tmp

DATE=`date "+DATE: %Y-%m-%d TIME: %H:%M:%S"`
echo "# add by c2d setup, $DATE" >> $PROFILE_NAME.tmp
echo "export C2D_ROOT=\`cat ~/.C2D_ROOT\`" >> $PROFILE_NAME.tmp

DATE=`date "+%Y-%m-%d-%H%M%S"`
cp $PROFILE_NAME $PROFILE_NAME-$DATE.bak
cp $PROFILE_NAME.tmp $PROFILE_NAME
rm $PROFILE_NAME.tmp

echo "> $PROFILE_NAME updated."

echo "$C2D_ROOT" > ~/.C2D_ROOT
echo "> ~/.C2D_ROOT updated."
echo ""

export C2D_ROOT=`cat ~/.C2D_ROOT`

# echo "INSTALLING QUICK FRAMEWORK"
# $C2D_ROOT/quick/bin/make_framework_package.sh

echo ""
echo ""

echo "done."
echo ""

if [ "$CALL_BY_CONTAINER" == "APP" ]; then

    /usr/bin/osascript -e 'tell app "System Events" to display dialog "Setup completed." default button 1 buttons {"OK"}'
    open -g -R "$C2D_ROOT/player3.app"

fi
