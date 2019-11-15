import requests
from bs4 import BeautifulSoup
from datetime import datetime
import keyboard

while True :
    try:
        if keyboard.is_pressed('q'):
            now = datetime.now()
            print(datetime.today().strftime("%Y/%m/%d %H:%M:%S"), "\n실시간 인기 검색어\n")
            html = requests.get('http://www.naver.com/').text
            soup = BeautifulSoup(html, 'html.parser')

            title_list = soup.select('.PM_CL_realtimeKeyword_rolling span[class*=ah_k]')

            for i, title in enumerate(title_list) :
                print(i+1, title.text)
            print()
    except:
        break