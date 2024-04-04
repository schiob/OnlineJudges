package main

import "fmt"

func main() {
	l1 := &ListNode{
		Val: 2,
		Next: &ListNode{
			Val: 4,
			Next: &ListNode{
				Val: 3,
			},
		},
	}

	l2 := &ListNode{
		Val: 5,
		Next: &ListNode{
			Val: 6,
			Next: &ListNode{
				Val: 4,
			},
		},
	}

	fmt.Println(addTwoNumbers(l1, l2))
}

type ListNode struct {
	Next *ListNode
	Val  int
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	var res *ListNode
	var aRes *ListNode
	aL1 := l1
	aL2 := l2

	ex := 0
	for aL1 != nil && aL2 != nil {
		next := &ListNode{}
		next.Val = (aL1.Val + aL2.Val + ex) % 10
		ex = int(aL1.Val+aL2.Val+ex) / 10

		aL1 = aL1.Next
		aL2 = aL2.Next
		if aRes == nil {
			res = next
			aRes = next
		} else {
			aRes.Next = next
			aRes = aRes.Next
		}
	}

	for aL1 != nil {
		next := &ListNode{}
		next.Val = (aL1.Val + ex) % 10
		ex = int(aL1.Val+ex) / 10

		aL1 = aL1.Next
		aRes.Next = next
		aRes = aRes.Next
	}

	for aL2 != nil {
		next := &ListNode{}
		next.Val = (aL2.Val + ex) % 10
		ex = int(aL2.Val+ex) / 10

		aL2 = aL2.Next
		aRes.Next = next
		aRes = aRes.Next
	}

	if ex != 0 {
		aRes.Next = &ListNode{
			Val: 1,
		}
	}

	return res
}
