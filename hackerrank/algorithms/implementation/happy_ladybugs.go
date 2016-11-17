package main
import "fmt"

func main() {
    var t, n int
    var s string
    fmt.Scan(&t)
    for i := 0; i < t; i++{
        fmt.Scan(&n)
        fmt.Scan(&s)
        m := make(map[rune]int)
        for _, val := range s{
            m[val]++
        }
        if m['_'] == 0{
            cha := rune(s[0])
            flag := false
            good := true
            for _, val := range s[1:]{
                if cha == val{
                    flag = true
                }else{
                    if !flag{
                        good = false
                        break
                    }
                    flag = false
                    cha = val
                }
            }
            if n == 1{
                good = false
            }
            if good && flag{
                fmt.Println("YES")
            }else{
                fmt.Println("NO")
            }
        }else{
            good := true
            for k, v := range m{
                if k != '_'{
                    if v < 2{
                        good = false
                        break
                    }
                }
            }
            if good{
                fmt.Println("YES")
            }else{
                fmt.Println("NO")
            }
        }
    }
}
