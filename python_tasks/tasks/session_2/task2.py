import requests
from bs4 import BeautifulSoup

def get_public_ip():

    response = requests.get('https://api.ipify.org/?format=json')
    soup = BeautifulSoup(response.text, 'html.parser')
    data = soup.text
    return data


ipdata = get_public_ip()
ip = eval(ipdata)['ip'] 
print(f"Your public IP address is: {ip}")
    
def get_location(ip):
 
    response = requests.get(f'https://ipinfo.io/{ip}/geo')
    bs = BeautifulSoup(response.text, 'html.parser')
    location_data = bs.text
    print(location_data)
    return location_data

get_location(ip)