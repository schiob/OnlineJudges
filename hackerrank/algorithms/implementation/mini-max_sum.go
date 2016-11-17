package main
import "fmt"
import "sort"

func main() {
    arr := make([]int, 5)
    fmt.Scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4])
    sort.Ints(arr)
    min := arr[0]
    max := arr[4]
    for _, v := range arr[1:4]{
        min += v
        max += v
    }
    fmt.Printf("%d %d\n", min, max)
    
}
