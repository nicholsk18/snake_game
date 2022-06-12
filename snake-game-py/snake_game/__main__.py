from pickle import NONE
import sys, pygame
from Player import Player

pygame.init()

WINDOW_WIDTH = 720
WINDOW_HEIGHT = 540

INNER_WINDOW_WIDTH = WINDOW_WIDTH - 100
INNER_WINDOW_HEIGHT = WINDOW_HEIGHT - 100

SIZE = (WINDOW_WIDTH, WINDOW_HEIGHT)

speed = [2, 2]
black = 0, 0, 0

screen = pygame.display.set_mode(SIZE)

player = Player(pygame, screen)

# pygame.display.flip()

while 1:
    for event in pygame.event.get():
        if event.type == pygame.QUIT: sys.exit()

    keys = pygame.key.get_pressed()
      

    pygame.draw.rect(screen, (255, 255, 255), pygame.rect.Rect((10, 10, INNER_WINDOW_WIDTH, INNER_WINDOW_HEIGHT)))

    player.draw(screen)
    player.handle_keys()
    pygame.display.update()

