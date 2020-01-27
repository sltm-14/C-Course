# Complete the sockMerchant function below.
import math
import os
import random
import re
import sys


def sockMerchant(n, ar):

    if (n <= 1 or n != len(ar)):
        return 0

    count = 0
    length = len(ar)
    modu = length % 2

    while(1):

        for x in range(1, length):
            if (ar[0] == ar[x]):
                count = count + 1
                if(ar[x]):
                    del ar[x]
                break
        if (((modu) and ((length-1) <= 1)) or ((not(modu)) and ((length) <= 1))):
            break
        else:
            del ar[0]
            length = len(ar)

    return count


if __name__ == '__main__':
   # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = 20

    ar = [4, 5, 5, 5, 6, 6, 4, 1, 4, 4, 3, 6, 6, 3, 6, 1, 4, 5, 5, 5]

    result = sockMerchant(n, ar)

    print(result)
