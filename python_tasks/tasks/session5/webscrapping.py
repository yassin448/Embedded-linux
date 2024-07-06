import requests
from bs4 import BeautifulSoup

def scrape_weather():
    # URL of the webpage to scrape
    url = 'https://weather.com/weather/today/l/USCA0987:1:US'
    
    # Send a GET request to the URL
    response = requests.get(url)
    
  
    if response.status_code == 200:
      
        soup = BeautifulSoup(response.content, 'html.parser')
        
        
        temperature_elem = soup.find('span', class_='CurrentConditions--tempValue--MHmYY')
        description_elem = soup.find('div', class_='CurrentConditions--primary--2DOqs')
        
        if temperature_elem and description_elem:
            temperature = temperature_elem.get_text().strip()
            description = description_elem.get_text().strip()
            print(f'Temperature: {temperature}')
            print(f'Weather Description: {description}')
        else:
            print('Temperature or Weather Description not found. Check the HTML structure.')
    else:
        print('Failed to retrieve webpage.')

scrape_weather()