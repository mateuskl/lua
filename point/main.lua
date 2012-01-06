require("point")

function main()
    a = Point:new{x = 34, y = -8}
    print(a.x, a.y)
    a:viewport()
    print(a.x, a.y)
    b = Point:new()
    print(b.x, b.y)
    -- print("mimimi: ", a:mamata(b))
    print("golden model (a-b):", a:reference_distance(b))
    print("golden model (b-a):", b:reference_distance(a))
    print("native: ", a:distance(b))
    print("bye");
end


main()

