#!/usr/bin/env python
# coding: utf-8

# # 해야 할 거 
# 
# 1. 루미안 데이터 저장
# 2. 저장 & 불러오기
# 3. 전투
#     1. 속도 빠른애 먼저 무브 선택
#     2. 상대방 무브
#     3. 계속 한 명 죽을 때까지

# In[ ]:


embit = { 
    "Name" : "embit",
    "Health" : 57,
    "Energy" : 51,
    "Melee Atk" : 60,
    "Melee Def" : 67,
    "Ranged Atk" : 36,
    "Ranged Def" : 50,
    "Speed" : 41,
    "Move" : ["Pounce", "Growl"]
}

dripple = { 
    "Name" : "dripple",
    "Health" : 63,
    "Energy" : 51,
    "Melee Atk" : 56,
    "Melee Def" : 50,
    "Ranged Atk" : 55,
    "Ranged Def" : 45,
    "Speed" : 40,
    "Move" : ["Strike", "Dawdle"]
}


ENE1 = {}
ENE2 = {}

def move(ene) : 
    while True : 
        for i in ene["Move"] : 
            print(i)
        move_num = int(input("Choose numbers between 1 to 4.\n"))
        if 1 <= move_num <= 4 : 
            return move_num

def battle(ene1, ene2)  : #ene1 == enemy1, ene2 == enemy2
    global ENE1
    ENE1 = ene1
    global ENE2
    ENE2 = ene2
    
    #한 명 죽을 때까지 싸우기 
    while(ene1["Health"] >= 0 or ene2["Health"] >= 0) : 
        
        #enemy 1이 속도가 더 빠른경우
        if ene1["Speed"] > ene2["Speed"] : 
            ene1_move = move(ene1) 
            print(ene1["Name"], "selected", ene1["Move"][ene1_move-1])
            ene2_move = move(ene2)
            print(ene2["Name"], "selected", ene2["Move"][ene2_move-1])
            
            print(ene1["Name"], " attacks ", ene2["Name"])
            ene2["Health"] = ene2["Health"] - int(ene1["Melee Atk"] - ene2["Melee Def"]/2)
            if ene2["Health"] < 0 : 
                ene2["Health"] = 0
            print(ene2["Name"], " damaged ", int(ene1["Melee Atk"] - ene2["Melee Def"]/2))
            print(ene2["Name"], "'s Health : ", ene2["Health"])
            
            if ene1["Health"] <= 0 : 
                print(ene1["Name"] + " lose")
                break
            elif ene2["Health"] <= 0 : 
                print(ene2["Name"] + " lose")
                break
                
            
            print(ene2["Name"], " attacks ", ene1["Name"])
            ene1["Health"] = ene1["Health"] - int(ene2["Melee Atk"] - ene1["Melee Def"]/2)
            if ene1["Health"] < 0 : 
                ene1["Health"] = 0
            print(ene1["Name"], " damaged ", int(ene2["Melee Atk"] - ene1["Melee Def"]/2))
            print(ene1["Name"], "'s Health : ", ene1["Health"])
            
            if ene1["Health"] <= 0 : 
                print(ene1["Name"] + " lose")
                break
            elif ene2["Health"] <= 0 : 
                print(ene2["Name"] + " lose")
                break
            
            print()
            
            
        elif ene1["Speed"] < ene2["Speed"]  : 
            print(ene1["Name"], " attacks ", ene2["Name"])
            ene1["Health"] = ene1["Health"] - (ene2["Melee Atk"] - ene1["Melee Def"]/2)
            ene2["Health"] = ene2["Health"] - (ene1["Melee Atk"] - ene2["Melee Def"]/2)

        

    
battle(embit, dripple)


# In[ ]:




