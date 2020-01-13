#!/usr/bin/env python
# coding: utf-8

# In[1]:


import time
from selenium import webdriver
from selenium.webdriver.common.by import By
#크롬 드라이버가 설치된 경로
cd_path = '../chromedriver'
driver = webdriver.Chrome(executable_path=cd_path)
url = "http://data.seoul.go.kr/dataList/datasetView.do?serviceKind=2&infId=370&stcSrl=370&srvType=S"
"""
해당 url은 JS를 통해 동적으로 HTML 구조가 변하기 때문에,
사이트를 로딩하고 JS 처리가 끝나지 않은 상태에서 html elements를 확인하려 하면 에러가 발생할 수 있다.
따라서, 브라우저 자체가 웹 요소들을 기다리도록 만들어주자.
"""
#브라우저에서 사용되는 엔진 자체에서 파싱되는 시간을 기다려 주는 메소드
#본인 컴은 많이 느려서 길게 줌. 보통 1~3초 줘도 충분
driver.implicitly_wait(5)
driver.get(url)
"""
위 URL의 경우 iframe이 이용됐다.
* iframe : 한 주소의 페이지 안에 페이지를 삽입하는 방법.
따라서 원하는 프레임에 있는 요소를 크롤링하기 위해 프레임을 바꾼다.
"""
#현 url의 html elements 모두 확인
#print(driver.page_source)
#selenium의 Implicitly & Explicitly wait를 걸어도 크롤링 하려는 부분이 로딩되는걸 기다리지 못하길래
#프로세스 자체를 무조건 지정한 시간만큼 지연시키는 메소드를 사용함.
time.sleep(5)
iframe_list = driver.find_elements_by_tag_name('iframe')
print(len(iframe_list))
#원래는 아래와 같이 iframe 값을 확인할 수 있으나, 이상하게 제대로 실행되지 않았음. 이유 파악이 어려움.
"""
for i, iframe in enumerate(iframe_list):
   try:
       print('{0}번째 iframe 입니다.'.format(i))
       driver.switch_to_frame(iframes[i])
       print(driver.page_source)
       # 원래 frame으로 돌아옵니다.
       #driver.switch_to_default_content()
   except:
       #exception이 발생했다면 원래 frame으로 돌아옵니다.
       driver.switch_to_default_content()
       pass
"""
iframe_id = 'IframeRequest'
driver.switch_to_frame(iframe_id)
#해당 frame에서의 html 값 확인
print(driver.page_source)
#이제 원하는 것만 찾으시면 됩니다...
#driver.find_element_by_...

