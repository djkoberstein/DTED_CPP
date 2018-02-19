namespace USGS
{
	struct UserHeaderLabel
	{
		// Recognition sentinel
		char RecognitionSentinel[3];
		
		// Fixed by standard.
		char FixedByStandard;
		
		// Longitude of origin (lower left corner of data set;
		// full degree value; leading zero(s) for all subfields:
		// degrees, minutes and seconds).  H is the Hemisphere 
		// of the data.
		char LongitudeOfOrigin[8];

		// Latitude of origin (lower left corner of data set;
		// full degree value; leading zero(s) for all sub fields:
		// (degrees, minutes and seconds).  H is the Hemisphere 
		// of the data.
		char LatitudeOfOrigin[8];

		// Longitude data interval in
		// tenths of seconds.
		char LongitudeDataInterval[4];

		// Latitude data interval in
		// tenths of seconds.
		char LatitudeDataInterval[4];

		// Absolute Vertical Accuracy in Meters. (With 90%
		// assurance that the linear errors will not exceed this
		// value relative to mean sea level (Right justified)).
		char AbsoluteVerticalAccuracy[4];

		// Security code. (Left Justified)
		char SecurityCode[3];

		// Unique reference number. To be defined by producer, 
		// may be left blank
		char UniqueReferenceNumber[12];

		// Count of the number of longitude  (profiles) lines
		// for a full one-degree cell. Count is based on the Level
		// of DTED and the latitude zone of the cell.  (See Table I,
		// II and III).
		char NumberOfLongitudeLines[4];

		// Count of the number of latitude points per longitude
		// line for a full one-degree cell.  ( e.g. 1201 for DTED1,
		// 3601.for DTED2).
		char NumberOfLatitudePoints[4];

		// 0 - Single
		// 1 - Multiple
		char MultipleAccuracy;

		// Unused portion for future use.
		char Reserved[24];
	};
}
