import sys
import random
import string

outputFilePath = sys.argv[1]

with open(outputFilePath, 'w') as f:
    password = ''.join(random.choice(string.ascii_letters +
                       string.digits) for _ in range(16))
    f.write(password)
