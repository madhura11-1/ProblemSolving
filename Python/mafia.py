import random

m = int(input("Hoe many people are there to play"))
players = []
dic = {}
dic2 = {}
doctor = 0
police = 0
thief = 0
citizens = 0

doctor = int((20/100)*m)
police = int((20/100)*m)
thief = (20/100)*m
citizens = (40/100)*m

Thief = int(thief)
Citizens = int(citizens)

if doctor + police + int(thief) + int(citizens) == m:
    print("Done")
else:
    citizens2 = str(citizens)
    thief2 = str(thief)
    index1 = citizens2.index(".")
    index2 = thief2.index(".")
    if int(thief2[index2+1]) >= 5:
        Thief += 1
    if int(citizens2[index1+1]) >= 5:
        Citizens += 1
    if doctor + police + Thief + Citizens == m:
        print("Done")
    else:
        Citizens += m - (doctor + police + Thief + Citizens)
        print("Done")

print(doctor,police,Thief,Citizens)


for i in range(m):
    k = input("Enter the name of player")
    players.append(k)

print(players)

for i in range(m):
    dic[players[i]] = ""
    dic2[players[i]] = 0
doc_count = 0
while(doc_count < doctor):
    x = random.randint(0,m-1)
    print(x)
    if dic[players[x]] == "":
        dic[players[x]] = "doctor"
        doc_count += 1
pol_count = 0
while(pol_count < police):
    x = random.randint(0,m-1)
    print(x)
    if dic[players[x]] == "":
        dic[players[x]] = "police"
        pol_count += 1
thief_count = 0
while(thief_count < Thief):
    x = random.randint(0,m-1)
    print(x)
    if dic[players[x]] == "":
        dic[players[x]] = "thief"
        thief_count += 1
citi_count = 0
while(citi_count < Citizens):
    x = random.randint(0,m-1)
    print(x)
    if dic[players[x]] == "":
        dic[players[x]] = "citizen"
        citi_count += 1

x = True   
print(dic)

while(x):
    print("City Sleep")
    print("all thieves get up")
    print("Here are the players choose one as ur victim : ")
    print(players)
    victim = input("Enter the victim here and u cannot choose urself or ur community people ")

    print("thieves sleep")
    print("doctor wake up")

    print("whom do u want to save")
    saved_person = input("enter the person u want to save ")

    print("doctor sleep")
    print("Police wake up")
    print("Whose info do u want")

    persoon_info = input("Enter player name ")
    flag = 0
    print(dic[persoon_info])

    if saved_person == victim:
        print("City win")
    else:
        print("city lost")
        flag = 1

    print("start discussion")

    for i in range(len(players)):
        vote = input("enter your vote and u cannot vote urself : " + players[i] + " ")
        dic2[vote] += 1

    max_vote = max(dic2, key=dic2.get)
    del dic[max_vote]
    del dic2[max_vote]
    players.remove(max_vote)
    print(dic)
    print(dic2)
    print(players)
    print("the maximum number of votes go to " + max_vote)

    if flag == 0:
        if "thief" in dic.values():
            x = True
        else :
            print("city fully win")
            x = False
    else:
        if "citizen" in dic.values():
            x = True
        else:
            print("city fully loose")
            x = False

