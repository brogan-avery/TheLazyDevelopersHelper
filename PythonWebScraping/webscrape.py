#TODO: add header


import json
from urllib.request import urlopen
import bs4
import requests
from bs4 import BeautifulSoup
# import pandas as pd


if __name__ == '__main__':
    problems = [] # will store the names/titles of practice problems
    links = [] # will store the web link to the problem in the parallel problem array

    # website pages URLs and directories
    urlBase = "https://www.codechef.com"
    easyUrl = urlBase + "/problems/easy"
    mediumUrl = urlBase + "/problems/medium"
    hardUrl = urlBase + "/problems/hard"

    # call to get the problems from a table will medium difficultly practice problem
    mediumPage = requests.get(mediumUrl)

    soup = BeautifulSoup(mediumPage.text, "html.parser")

    problems = soup.tbody.find_all('b')
    divs = soup.tbody.find_all(class_ = 'problemname')

    for div in divs:
        links.append(div.a['href'])

    with open('practiceCodeProblems.txt', 'w') as file:
        for i in range(100):
            file.write(problems[i].text + "\n")
            file.write(mediumUrl + links[i] + "\n")

    # i = 1
    # for problem in problems:
    #     print(i, ".", problem.text)
    #     i = i + 1

    # for link in links:
    #     print(link)

    # limit the number of problems shown just for testing/ demonstrating the example mostly because there are like 900 to scroll through
    # for i in range(1, 26):
    #     print(i, ".", problems[i].text)









    # mediumPage = requests.get("https://www.codechef.com/problems/medium/")




