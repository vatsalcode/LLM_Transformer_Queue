def check_luhn(card_number):
    
    card_len = len(card_number)

    check_sum = 0

    is_parity = False

    for digit in range(card_len - 1, -1, -1):
        if is_parity:
            cal = int(card_number[digit]) * 2
        else:
            cal = int(card_number[digit])

        if cal > 9:
            check_sum += cal - 9
        else:
            check_sum += cal

        is_parity = not is_parity

    return check_sum % 10 == 0


if __name__ == "__main__":
    import doctest

    doctest.testmod()
