class Player(object):
    def __init__(self, pygame, screen):
        self.K_LEFT = pygame.K_LEFT
        self.K_RIGHT = pygame.K_RIGHT
        self.K_UP = pygame.K_UP
        self.K_DOWN = pygame.K_DOWN
        self.pygame = pygame
        self.screen = screen

        self.rect = pygame.rect.Rect((64, 54, 10, 10))
        self.previous = None

    def handle_keys(self):
        key = self.pygame.key.get_pressed()
        dist = 1
        if key[self.K_LEFT]:
           self.rect.move_ip(-1, 0)
        if key[self.K_RIGHT]:
           self.rect.move_ip(1, 0)
        if key[self.K_UP]:
           self.rect.move_ip(0, -1)
        if key[self.K_DOWN]:
           self.rect.move_ip(0, 1)


    def draw(self, surface):
        self.pygame.draw.rect(self.screen, (0, 0, 128), self.rect)