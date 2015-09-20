"""Diferent ways to give change Top-Down

The idea is divide in 2 sets, the set in which you can give one coin and work
with the remaining and the set where you can't use the coin and work with one
coin less.

"""

total_change = dict()

def coun(coins, chan):
    pair = (chan, tuple(coins))
    if pair in total_change:
        return total_change[pair]
    elif chan == 0:
        total_change[pair] = 1
        return 1
    elif chan < 0 or len(coins) <=0:
        total_change[pair] = 0
        return 0
    else:
        total_change[pair] = coun(coins, chan-coins[-1]) + coun(coins[:-1], chan)
        return total_change[pair]

n, m = list(map(int, input().split()))
coins = list(map(int, input().split()))

print(coun(coins, n))