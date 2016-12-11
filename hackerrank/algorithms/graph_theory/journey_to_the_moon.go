package main
import "fmt"

var arr []int

func find(x int) int{
    if arr[x] != x{
        arr[x] = find(arr[x])
    }
    return arr[x]
}

func union(x int, y int){
    px := find(x)
    py := find(y)
    if px == py{
        return
    }
    arr[py] = px
}

func main() {
    var n, e, a, b, sum, res int
    sum = 0
    res = 0
    fmt.Scan(&n, &e)
    arr = make([]int, n)
    count := make([]int, n)
    for i := 0 ; i < n ; i++{
        arr[i] = i
    }
    for i := 0 ; i < e ; i++{
        fmt.Scan(&a, &b)
        union(a, b)
    }
    for i := 0 ; i < n ; i++{
        _ = find(i)
        count[arr[i]]++
    }
    for i := 0 ; i < n ; i++{
        if count[i] != 0{
            res += (count[i]*sum)
            sum += count[i]
        }
    }
    fmt.Print(res)
    
}
