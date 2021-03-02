import json
import os
UserList = 10
outj = []
path = '1.json'
path1 = "2.json"

with open(path, 'r') as fr:
    inj = json.load(fr)

for i in range(UserList+1):
    ftask = 0

    for j in range(len(inj)):
        if (inj[j]["completed"] == True and inj[j]["userId"] == i):
            ftask += 1

    if (i > 0):
        outj1 = {"task_completed":ftask, "userId":i}
        outj += [outj1]

with open(path1, 'w') as fw:
    json.dump(outj, fw, indent = 1)
