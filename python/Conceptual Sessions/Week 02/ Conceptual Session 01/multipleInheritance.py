class Watch:
  def __init__(self,brand,model) -> None:
    self.brand=brand
    self.model=model

  def display_time(self):
    print("display time")

class FitnessTracker:
  def __init__(self,price) -> None:
    self.price=price

  def track_step(self):
    print("Tracking step")
  def track_calories(self):
    print("Tracking Calories")

class SmartWatch(Watch,FitnessTracker):
  def __init__(self, brand, model,price) -> None:
    Watch.__init__(self,brand,model)
    FitnessTracker.__init__(self,price)

  def display(self):
    print("Display")

apple=SmartWatch("apple","ultra",13)
apple.display()
  