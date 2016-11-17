package main
import "fmt"
import "math"

func main() {
    var I, J, K, rev, left int
    res := 0
    fmt.Scanf("%d %d %d", &I, &J, &K)
    for i := I ; i <= J ; i++{
        rev = 0
        left = i
        for left > 0{
            r := left % 10
            rev = rev * 10 + r
            left /= 10
        }
        if int(math.Abs(float64(i-rev))) % K == 0{
            res++
        }
    }
    
    fmt.Println(res)
    
}
