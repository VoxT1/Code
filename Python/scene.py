from manim import *

class Something(Scene):
    def construct(self):
        circle = Circle()
        self.add(circle)
        self.play(Create(circle))
        square = Square()
        self.wait(2)
        self.play(Transform(circle,square))
        self.wait(2)