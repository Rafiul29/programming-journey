# Date and Time

## Section 5.1: Parsing a string into a timezone aware datetime object
```sh
import datetime
dt=datetime.datetime.strptime("2016-04-15T08:27:18-0500", "%Y-%m-%dT%H:%M:%S%z")
print(dt)
```
```sh
import dateutil.parser
dt = dateutil.parser.parse("2016-04-15T08:27:18-0500")
print(dt)
```

## Section 5.2: Constructing timezone-aware datetimes
To make them timezone-aware, you must attach a tzinfo object, which provides the UTC offset and timezone abbreviation as a function of date and time.

Fixed Offset Time Zones
```sh
from datetime import datetime,timedelta,timezone
JST=timezone(timedelta(hours=+9))
dt=datetime(2015,1,1,12,0,0,tzinfo=JST)

print(dt)
print(dt.tzname())
```

Zones with daylight savings time
```sh
from datetime import datetime
from dateutil import tz
local=tz.gettz() # local time
PT=tz.gettz('US/Pacific') #Pacific time

dt_l = datetime(2015, 1, 1, 12, tzinfo=local) # I am in EST
dt_pst = datetime(2015, 1, 1, 12, tzinfo=PT)
dt_pdt = datetime(2015, 7, 1, 12, tzinfo=PT) # DST is handled automatically
print(dt_l)
print(dt_pst)
print(dt_pdt)
```

## Section 5.3: Computing time dierences
```sh
from datetime import datetime ,timedelta
now=datetime.now()
then=datetime(2024,5,29)

delta=now-then

print(delta)
print(delta.days)
print(delta.microseconds)
print(delta.seconds)
print(delta.max)
print(delta.resolution)
```
