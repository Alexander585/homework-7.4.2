FROM ubuntu:16.04

#Обновляем список пакетов, устанавливаем компилятор и текстовый редактор 
RUN apt-get update && apt-get -y install gcc g++ build-essential nano git

RUN git clone https://github.com/Alexander585/homework-7.4.2.git cap1
WORKDIR /cap1
RUN bash build.sh

#Команды Docker для сборки

# sudo docker build -t ubuntu1604img . -f Dockerfile
# sudo docker run --name ubuntu1604_container -it ubuntu1604img

#Команды для дальнейшего подключения к контейнеру

# sudo docker start ubuntu1604_container
# sudo docker attach ubuntu1604_container
