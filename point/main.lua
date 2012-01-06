require("point")

function main()
    a = Point:new{x = 34, y = -8}
    print(a.x, a.y)
    a:viewport()
    print(a.x, a.y)
    b = Point:new()
    print(b.x, b.y)
    print("golden model (a-b):", a:reference_distance(b))
    print("golden model (b-a):", b:reference_distance(a))
    print("native (a-b): ", a:distance(b))
    print("native (b-a): ", b:distance(a))
    print("bye");
end


main()

