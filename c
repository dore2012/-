import os
import time
import random
time_start = time.time()
for n in range(0,200):
    command = 'adb	shell	input	touchscreen	swipe	930	880	930	%d' %(random.randint(380,580))
    os.system(command)
    time.sleep(5)
    n=n+1
    time_end = time.time()
    print('time cost', time_end - time_start, 's',n)
    if (time_end - time_start > 910):
        break


