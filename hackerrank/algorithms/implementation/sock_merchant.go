package main
import "fmt"

func main() {
    var n, d int
    res := 0
    fmt.Scan(&n)
    m := make(map[int]int)
    
    for i := 0 ; i < n ; i++{
        fmt.Scan(&d)
        m[d]++
    }
    for _, v := range m{
        res += v/2
    }
    fmt.Println(res)
}
