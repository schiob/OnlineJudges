package main
import "fmt"

func main() {
    var n, k, temp int
    res := 0
    fmt.Scanf("%d %d", &n, &k)
    arr := make([]int, k)
    for i := 0; i < n; i++{
        fmt.Scan(&temp)
        arr[temp%k]++
    }
    if min_one := arr[0]-1; min_one > 0{
        res += (min_one*(min_one+1))/2
    }
    if len(arr)%2 == 0{
        for i, v := range arr[1:]{
            i++
            if i == len(arr)/2{
                if min_one := v-1; min_one > 0{
                    res += (min_one*(min_one+1))/2
                }
                break
            }else{
                res += v*arr[len(arr)-i]
            }
        }
    }else{
        for i, v := range arr[1:]{
            i++
            if i == len(arr)/2+1{
                break
            }else{
                res += v*arr[len(arr)-i]
            }
        }
    }
    fmt.Println(res)
                
}
