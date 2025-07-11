
import sys
import sdl2
#import sdl2.ext

def main():
    sdl2.ext.init()

    # Cria uma janela 800x600 com título
    window = sdl2.ext.Window("Janela Amarela SDL2", size=(800, 600))
    window.show()

    # Obtém o contexto do renderizador
    renderer = sdl2.ext.Renderer(window)

    # Cor amarela (R=255, G=255, B=0, A=255)
    AMARELO = sdl2.ext.Color(255, 255, 0)

    # Pinta a janela de amarelo
    renderer.color = AMARELO
    renderer.clear()
    renderer.present()

    # Loop principal: espera até o utilizador fechar a janela
    running = True
    while running:
        events = sdl2.ext.get_events()
        for event in events:
            if event.type == sdl2.SDL_QUIT:
                running = False
                break

    sdl2.ext.quit()
    return 0

if __name__ == "__main__":
    sys.exit(main())
