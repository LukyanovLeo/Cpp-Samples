var previousNodes = [],//������ ���������� ������
	currentNodes = [],//������ �������� preCurrentNodes
	isVisited = [],
	way = [],
	numberOfLevels = [];
var is = false, levels = 0;
	
previousNodes[0] = prompt("Input starting node", 0);

var finish = prompt("Input ending node", 5);
	while (finish == previousNodes[0]){
		finish = prompt("Wrong number\nInput ending node");
	}
	for (var i = 0; i < numberOfNodes; i++){
		isVisited[i] = 0;
		numberOfLevels[i] = 0;
	}
	isVisited[previousNodes[0]] = 1;
	
while (!isFullBin(isVisited)){
	//�������� �� ��������
	levels++;
	for (var i = 0; i < previousNodes.length; i++){
		for (var j = 0; j < numberOfNodes; j++){
			if ((matrix[previousNodes[i]][j] == 1) && (!isVisited[j])){
				if (j == finish){	
					way.push(finish);
					is = true;
					numberOfLevels[j] = levels;
					break;
				}
				currentNodes.push(VALUE[j]);
				isVisited[j] = 1;
				numberOfLevels[j] = levels;
			}
		}
		if (is)	break;	//��������� ����
	}
	toRewrite(previousNodes, currentNodes);	//���������� � ������ ����������� ������ �������
	if (is)	break;
}
//��������������� ���� �� ����� �� ������
for (var i = levels; i > 0; i--){
	for (var j = 0; j < numberOfNodes; j++){
		if ( (matrix[finish][j] == 1) && (numberOfLevels[j] == (i-1)) && (isVisited[j]) ){
			way.push(j);
			finish = j;
			break;
		}
	} 
}
document.write("���� �� ��������� ������� �� ��������: " + way.reverse());



























