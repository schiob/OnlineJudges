package main
import "fmt"

func main() {
    var x1, v1, x2, v2 int
    fmt.Scanf("%d %d %d %d", &x1, &v1, &x2, &v2)
    if x1 < x2 && v1 > v2{
        if (x1-x2)%(v2-v1) == 0{
        fmt.Println("YES")
        }else{
            fmt.Println("NO")
        }
    }else if x1 > x2 && v1 < v2{
        if (x2-x1)%(v1-v2) == 0{
            fmt.Println("YES")
        }else{
            fmt.Println("NO")
        }
    }else{
        fmt.Println("NO")
    }
    
}
