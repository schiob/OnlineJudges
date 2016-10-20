package main
import "fmt"

func main() {
    var n int
    tot := 0
    vis := 2
    fmt.Scan(&n)
    for i := 1 ; i <= n ; i++{
        tot += vis
        vis = vis*3/2
    }
    fmt.Println(tot)
}
