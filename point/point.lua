-- Point - BEGIN
Point = {x = 0, y = 0}
function Point:new(o)
    o = o or {}   -- create object if user does not provide one
    setmetatable(o, self)
    self.__index = self
    return o
end


function Point:viewport()
    self.y = -self.y
end


function Point:reference_distance(other)
    return (self.x - other.x) + (self.y - other.y)
end


function Point:distance(other)
    return native_distance(self, other)
end


-- Point - END

