namespace usgs
{
namespace dted
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

struct DataSetIdentification
{
	char RecognitionSentiel[3];
	char SecurityClassificationCode;
	char SecurityControlAndReleaseMarkings[2];
	char SecurityHandlingDescription[27];
	char ReservedForFutureUse1[26];
	char DMASeriesDesignatorForProductLevel[5];
	char UniqueReferenceNumber[15];
	char ReservedForFutureUse2[8];
	char DataEditionNumber[2];
	char MatchMergeVersion;
	char MaintenanceDate[4];
	char MatchMergeDate[4];
	char MaintenanceDescriptionCode[4];
	char ProducerCode[8];
	char ReservedForFutureUse3[16];
	char ProductSpecification[9];
	char ProductSpecificationAmendment[2];
	char DateOfProductSpecification[4];
	char VerticalDatum[3];
	char HorizontalDatumCode[5];
	char DigitizingCollectionSystem[10];
	char CompilationDate[4];
	char ReservedForFutureUse4[22];
	char LatitudeOfOriginOfData[9];
	char LongitudeOfOriginOfData[10];
	char LatitudeOfSWCornerOfData[7];
	char LongitudeOfSWCornerOfData[8];
	char LatitudeOfNWCornerOfData[7];
	char LongitudeOfNWCornerOfData[8];
	char LatitudeOfNECornerOfData[7];
	char LongitudeOfNECornerOfData[8];
	char LatitudeOfSECornerOfData[7];
	char LongitudeOfSECornerOfData[8];
	char OrientationAngle[9];
	char LatitudeInterval[4]; // tenths of seconds
	char LongitudeInterval[4]; // tenths of seconds
	char NumberOfLatitudeLines[4];
	char NumberOfLongitudeLines[4];
	char PartialCellIndicator[2];
	char ReservedForDmaUseOnly[101];
	char ReservedForProducingNationUseOnly[100];
	char ReservedForFutureUse5[156];
};

struct CoordinatePairDescription
{
	char Latitude[9];
	char Longitude[10];
};

struct AccuracySubregionDescription 
{
	char AbsoluteHorizontalAccuracy[4]; // Meters
	char AbsoluteVerticalAccuracy[4];   // Meters
	char RelativeHorizontalAccuracy[4]; // Meters
	char RelativeVerticalAccuracy[4];   // Meters
	char NumberOfCoordinatesInAccuracySubRegionOutline[2];
	struct CoordinatePairDescription CoordinatePairDescriptions[14];
};

struct AccuracyDescriptionRecord
{
	char RecognitionSentinel[3];
	char AbsoluteHorizontalAccuracy[4]; // Meters
	char AbsoluteVerticalAccuracy[4];   // Meters
	char RelativeHorizontalAccuracy[4]; // Meters
	char RelativeVerticalAccuracy[4];   // Meters
	char ReservedForFutureUse1[4];
	char ReservedForNimaUseOnly1;
	char ReservedForFutureUse2[31];
	char MultipleAccuracyOutlineFlag[2];
	struct AccuracySubregionDescription AccuracySubregionDescription[9];
	char ReservedForNimaUseOnly2[18];
	char ReservedForFutureUse3[69];
};

struct DtedHeader
{
	UserHeaderLabel uhl;
	DataSetIdentification dsi;
	AccuracyDescriptionRecord acc;
};

struct DataRecordLevel0
{
	char RecognitionSentinel;
	char DataBlockCount[3];
	char LongitudeCount[2];
	char LatitudeCount[2];
	char Elevation[258];
	char Checksum[4];
};

struct DataRecordLevel1
{
	char RecognitionSentinel;
	char DataBlockCount[3];
	char LongitudeCount[2];
	char LatitudeCount[2];
	char Elevation[2414];
	char Checksum[4];
};

struct DataRecordLevel2
{
	char RecognitionSentinel;
	char DataBlockCount[3];
	char LongitudeCount[2];
	char LatitudeCount[2];
	char Elevation[7214];
	char Checksum[4];
};

}
}