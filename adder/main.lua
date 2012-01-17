Adder = {}
function Adder:new(o)
    o = o or {}   -- create object if user does not provide one
    setmetatable(o, self)
    self.__index = self
    return o
end

function Adder:sum(a, b)
    return native_sum(a, b)
end


-- Point - END


function main()
    a = Adder:new{}
    s = a:sum(2,3)
    print("sum: ", s)    
end


main()

