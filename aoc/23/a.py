#!/usr/bin/env python3
ranks = 'AKQT98765432J'
def get_score(hand):
    poss = [get_score_where(hand, nojoke) for nojoke in possible_nojokes(hand)]
    poss = list(reversed(sorted(poss)))
    return poss[0]
def possible_nojokes(hand):
    if len(hand) == 0:
        yield ''
        return
    if hand[0] == 'J':
        for rep in ranks:
            if rep != 'J':
                for nj in possible_nojokes(hand[1:]):
                    yield rep + nj
    else:
        for nj in possible_nojokes(hand[1:]):
            yield hand[0] + nj

def get_score_where(hand, nojoke):

    tb = [len(ranks) - ranks.index(x) for x in hand]

    if all_same(nojoke):
        return (8, tb)

    ns = collections.Counter(nojoke)

    mc = ns.most_common(5)
    counts = [x[1] for x in mc]
    if counts == [4, 1]:
        return (7, tb)

    if counts == [3, 2]:
        return (6, tb)

    if counts == [3, 1, 1]:
        return (5, tb)

    if counts == [2, 2, 1]:
        return (4, tb)

    if counts == [2, 1, 1, 1]:
        return (3, tb)

    if counts == [1, 1, 1, 1, 1]:
        assert all_different(nojoke)
        return (2, tb)

    return (0, 0)

for hand, bid in stuples(text):
    bid = int(bid)
    score = get_score(hand)
    scores.append((score, bid, hand))

ranked = list(sorted(scores))

for i, (score, bid, hand) in enumerate(ranked):
    rank = i + 1
    tot += bid * rank
ans(tot)
