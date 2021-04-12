

def compareTriplets(a, b):
    answer = []
    alice, bob = 0, 0
    # zip takes iterables as an argument & return iterator
    for alice_s, bob_s in zip(a, b):
        # If alice gets more point
        if alice_s > bob_s:
            alice += 1
        # If bob gets more points
        if alice_s < bob_s:
            bob += 1
    #  Appending it to the answer
    answer.append(alice)
    answer.append(bob)
    return answer
