package main
import "fmt"

func main() {
    var s, t, a, b, n, m, d int
    totN := 0
    totM := 0
    fmt.Scanf("%d %d", &s, &t)
    fmt.Scanf("%d %d", &a, &b)
    fmt.Scanf("%d %d", &m, &n)
    for i := 0 ; i < m ; i++{
        fmt.Scan(&d)
        if a + d >= s && a + d <= t{
            totM++
        }
    }
    for i := 0 ; i < n ; i++{
        fmt.Scan(&d)
        if b + d >= s && b + d <= t{
            totN++
        }
    }
    fmt.Printf("%d\n%d\n", totM, totN)
    
}
