import os

def cost_low(B, idx, b_low_cost, b_high_cost):
    if b_low_cost[idx] != -1:
        return b_low_cost[idx]
    result = max(cost_low(B, idx+1, b_low_cost, b_high_cost), cost_high(B, idx+1, b_low_cost, b_high_cost) + abs(B[idx+1]-1))
    b_low_cost[idx] = result
    return result

def cost_high(B, idx, b_low_cost, b_high_cost):
    if b_high_cost[idx] != -1:
        return b_high_cost[idx]
    result = max(cost_low(B, idx+1, b_low_cost, b_high_cost) + abs(B[idx] - 1), cost_high(B, idx+1, b_low_cost, b_high_cost) + abs(B[idx+1]-B[idx]))
    b_high_cost[idx] = result
    return result

def cost(B):
    b_low_cost = [-1] * len(B)
    b_high_cost = [-1] * len(B)
    b_low_cost[-1] = 0
    b_high_cost[-1] = 0

    return max(cost_low(B, 0, b_low_cost, b_high_cost), cost_high(B, 0, b_low_cost, b_high_cost))

def cost_iter(B):
    b_low_cost = [0] * len(B)
    b_high_cost = [0] * len(B)

    for i in range(1, len(B)):
        h_to_l = abs(B[i-1] - 1)
        l_to_h = abs(1 - B[i])
        h_to_h = abs(B[i-1] - B[i])

        low = max(b_low_cost[i-1], b_high_cost[i-1] + h_to_l)
        high = max(b_low_cost[i-1] + l_to_h, b_high_cost[i-1] + h_to_h)

        b_low_cost[i] = low
        b_high_cost[i] = high


    # print(B)
    # print(b_low_cost)
    # print(b_high_cost)
    return max(b_low_cost[-1], b_high_cost[-1])

# L() = max (L(i+1),H(i+1)+|B(i+1) - 1|)
# H() = max (L(i+1)+|B(i) - 1|,H(i+1)+|B(i+1) - B(i)|)
# F() = max(L(i),H(i))

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        B = list(map(int, input().rstrip().split()))

        result = cost_iter(B)

        print(str(result) + '\n')
