import sys
sys.set_int_max_str_digits(500000)

rsl = 1
N = int(input(""))
for i in range(1,N+1):
    rsl *= i
print(rsl)