
require("config")
require("framework.init")

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

    local label = cc.Label:createWithSystemFont("hello, cocos2dx-lite!", "sans", 64)
    -- local label = cc.Label:createWithTTF("Hello", "fonts/arial.ttf", 64)
    label:setPosition(size.width/2, size.height/2)
    scene:addChild(label)

    coil = require "coil"
    coil.add(function()
        for i = 1,5 do
            print("hello")
            coil.wait(1) -- wait 1s
        end
    end)

    local sharedScheduler = cc.Director:getInstance():getScheduler()
    sharedScheduler:scheduleScriptFunc(function(dt) coil.update(dt) end, 0, false)
end
