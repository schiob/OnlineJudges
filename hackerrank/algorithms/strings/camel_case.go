package main
import "fmt"

func main() {
    var s string
    cont := 1
    fmt.Scan(&s)
    for _, c := range s{
        if c < 'a'{
            cont++
        }
    }
    fmt.Println(cont)
}
