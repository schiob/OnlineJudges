package main

import "fmt"

func main() {
	nums := []int{2, 7, 11, 15}
	target := 9

	fmt.Println(twoSum(nums, target))
}

func twoSum(nums []int, target int) []int {
	mapa := make(map[int][]int)

	for i := 0; i < len(nums); i++ {
		mapa[nums[i]] = append(mapa[nums[i]], i)
	}

	for j := 0; j < len(nums); j++ {
		if arrIdx, ok := mapa[target-nums[j]]; ok {
			for _, idx := range arrIdx {
				if idx != j {
					return []int{j, idx}
				}
			}
		}
	}
	return []int{0, 0}
}
