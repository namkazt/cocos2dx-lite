
require("config")
-- require("framework.init")

-- define global module
game = {}

function game.startup()
    cc.FileUtils:getInstance():addSearchPath("res/")
    game.benchmark()
end

function game.exit()
    os.exit()
end

function game.benchmark()
    local sharedDirector = cc.Director:getInstance()
    sharedDirector:setDisplayStats(DEBUG_FPS or true)
    local scene = cc.Scene:create()
    sharedDirector:runWithScene(scene)

    local size = sharedDirector:getWinSize()

    local label = cc.Label:createWithSystemFont("hello, cclua!", "sans", 64)
    label:setPosition(size.width/2, size.height/2)
    scene:addChild(label)


end
