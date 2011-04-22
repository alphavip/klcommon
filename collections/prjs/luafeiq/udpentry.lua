--[[
  Udp stuff
  Kevin Lynx
  1.26.2011
--]]

MULTI_ADDR = "226.81.9.8"
BIND_PORT = 2425
DEST_PORT = 2425
BROADCAST_ADDR = "255.255.255.255"

function udp_bind(udp)
    local ret, msg = udp:setsockname("*", BIND_PORT)
    if ret == nil then
        logw(msg)
    else
        logi("bind ok")
    end
end

function udp_setoption(udp)
    local ret, msg = udp:setoption("ip-add-membership", 
        { multiaddr= MULTI_ADDR, interface="*" } )
    if ret == nil then
        logw(msg)
    else
        logi("add multicast memeber success")
    end
    ret, msg = udp:setoption("broadcast", true)
    if ret == nil then
        logw(msg)
    else
        logi("enable broadcast success")
    end
    udp:settimeout(0.02)
end

function udp_init()
    local socket = require("socket")
    local udp = socket.udp()
    udp_bind(udp)
    udp_setoption(udp)
    return udp
end

function udp_runonce(udp)
    local data, ip, port = udp:receivefrom()
    if data ~= nil then-- timeout or error
        handle_recv_data(udp, data, ip, port)
    end
end

