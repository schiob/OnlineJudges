package main
import "fmt"

func main() {
    var n, k, temp, total int
    fmt.Scanf("%d %d", &n, &k)
    mod := make([]int, k)
    for i := 0 ; i < n ; i++{
        fmt.Scan(&temp)
        mod[temp%k]++
    }
    if k%2 == 0{
        for i, v := range mod[1:k/2]{
            if v > mod[len(mod)-i-1]{
                total += v
            }else{
                total += mod[len(mod)-i-1]
            }
        }
        if mod[k/2] != 0{
            total++
        }
        if mod[0] != 0{
            total++
        }
    }else{
        for i, v := range mod[1:k/2+1]{
            if v > mod[len(mod)-i-1] {
                total += v
            }else{
                total += mod[len(mod)-i-1]
            }
        }
        if mod[0] != 0{
            total++
        }
    }
    fmt.Println(total)
}
