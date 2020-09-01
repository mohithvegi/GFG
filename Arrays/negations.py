# // https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations/0

import heapq

T = int(input())

for t in range(T):
	N, k = map(int, input().split())
	array = list(map(int, input().split()))
	heapq.heapify(array)
	for i in range(k):
		small = heapq.heappop(array)
		heapq.heappush(array, -small)

	print(sum(array))
