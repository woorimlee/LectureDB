#!/usr/bin/env python
# coding: utf-8

# In[5]:


import requests
from bs4 import BeautifulSoup

url = "https://overwatch.op.gg/detail/overview/111029242162120119198225"
html = requests.get(url).text
soup = BeautifulSoup(html, 'html.parser')
records = soup.select('div.PlayerSummaryStats > div:nth-child(1) > em')

import os
from filecmp import cmp
from shutil import copyfile

if os.path.isfile("전적.txt") == False : #전적 검색을 처음하는 경우
    print("전적을 처음으로 검색해봤습니다.")
    f = open("전적.txt", "w")
    for rec in records :
        print(rec.string.replace(" ", ""))
        f.write(rec.string.replace(" ", ""))
    f.close()
        
else :                                   #전적을 검색한적이 있다면
    copyfile("전적.txt", "예전전적.txt") #예전에 검색한 전적을 
                                         #예전전적.txt에 저장
    f = open("전적.txt", "w")
    for rec in records :
        print(rec.string.replace(" ", ""))
        f.write(rec.string.replace(" ", ""))
    f.close()
    if cmp("전적.txt", "예전전적.txt") :  #파일 비교
        print("게임을 플레이하지 않았습니다.")
    else : 
        print("게임을 플레이한 기록이 있습니다.")

