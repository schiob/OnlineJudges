package main
import "fmt"

func main() {
    var temp, cont, n, res int
    fmt.Scan(&n)
    fmt.Scan(&temp)
    for i := 1 ; i < n ; i++{
        fmt.Scan(&temp)
        if temp == 1{
            res += cont/2 + cont%2
            cont = 1
        }else{
            cont++
        }
    }
    res += cont/2 + cont%2
    fmt.Println(res)
}
