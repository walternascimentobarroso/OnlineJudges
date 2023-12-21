package solution

// you can also use imports, for example:
// import "fmt"
// import "os"
import "strconv"
// you can write to stdout for debugging purposes, e.g.
// fmt.Println("this is a debug message")

func Solution(N int) int {
    result := strconv.FormatInt(int64(N), 2)
    number, old, start := 0, 0, false

    for i := len(result) - 1; i >= 0; i-- {
        bin := string(result[i])
        if bin == "1" {
            if start {
                start = false
                old = max(number, old)
            }

            start = true
            number = 0
            continue
        }
        number++
    }
    return old
}

func max(a int, b int) int {
    if a > b {
        return a
    }
    return b
}