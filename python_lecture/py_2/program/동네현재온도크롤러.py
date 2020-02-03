#!/usr/bin/env python
# coding: utf-8

# In[1]:


from urllib import request, parse
from bs4 import BeautifulSoup

"""GET 방식을 통해 HTTP 요청을 하게 되는 파라미터 정보는 경우 URL 뒤에 붙어 전송됩니다.
이때 URL은 ASCII 코드값만 사용되는데, 한글은 ASCII 코드로 표현할 수 없으므로 인코딩 해주어야 합니다.
"""

town = input("현재 날씨가 궁금한 동네의 이름을 입력해주세요 : ")
town_weather = parse.quote(town + "+날씨")

url = 'https://search.naver.com/search.naver?ie=utf8&query='+ town_weather

html = request.urlopen(url).read()
soup = BeautifulSoup(html,'html.parser')
print('현재 \'' + town + '\'은 ' + soup.find('p', class_='info_temperature').find('span', class_='todaytemp').text + '도 입니다.', sep = '')

import os
os.system('pause')

