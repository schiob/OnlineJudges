package main
import "fmt"

func main() {
    var V, E, v1, v2, n, q int
    INF := 999999999
    fmt.Scanf("%d %d", &V, &E)
    
    g := make([][]int, V)
    for i := range g{
        g[i] = make([]int, V)
        for j := range g[i]{
            if j == i{
                g[i][j] = 0
            }else{
                g[i][j] = INF
            }
        }
    }
    
    for i := 0 ; i < E ; i++{
        fmt.Scanf("%d %d %d", &v1, &v2, &n)
        g[v1-1][v2-1] = n
    }
    
    for k := 0 ; k < V ; k++{
        for i := 0 ; i < V ;i++{
            for j := 0 ; j < V ; j++{
                if g[i][k] + g[k][j] < g[i][j]{
                    g[i][j] = g[i][k] + g[k][j]
                }
            }
        }
    }
    
    fmt.Scan(&q)
    
    for i := 0 ; i < q ; i++{
        fmt.Scanf("%d %d", &v1, &v2)
        if(g[v1-1][v2-1] == INF){
            fmt.Println(-1)
        }else{
            fmt.Println(g[v1-1][v2-1])
        }
    }
}
